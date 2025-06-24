/*
 Navicat Premium Dump SQL

 Source Server         : book
 Source Server Type    : SQLite
 Source Server Version : 3045000 (3.45.0)
 Source Schema         : main

 Target Server Type    : SQLite
 Target Server Version : 3045000 (3.45.0)
 File Encoding         : 65001

 Date: 24/06/2025 23:47:58
*/

PRAGMA foreign_keys = false;

-- ----------------------------
-- Table structure for book
-- ----------------------------
DROP TABLE IF EXISTS "book";
CREATE TABLE "book" (
  "book_id" integer NOT NULL PRIMARY KEY AUTOINCREMENT,
  "title" text,
  "author" TEXT,
  "category1" text,
  "category2" text,
  "price" text,
  "total_copies" integer,
  "available_copies" integer
);

-- ----------------------------
-- Records of book
-- ----------------------------
INSERT INTO "book" VALUES (1, '原神', '大伟哥', '游戏', '二刺螈', '64.8', 100, 100);

-- ----------------------------
-- Table structure for borrow_record
-- ----------------------------
DROP TABLE IF EXISTS "borrow_record";
CREATE TABLE "borrow_record" (
  "record-id" INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
  "user_id" INTEGER,
  "book_id" INTEGER,
  "borrow_date" text,
  "due_date" text,
  "return_date" text,
  "status" TEXT,
  FOREIGN KEY ("book_id") REFERENCES "book" ("book_id") ON DELETE NO ACTION ON UPDATE NO ACTION,
  FOREIGN KEY ("user_id") REFERENCES "user" ("user_id") ON DELETE NO ACTION ON UPDATE NO ACTION
);

-- ----------------------------
-- Records of borrow_record
-- ----------------------------
INSERT INTO "borrow_record" VALUES (1, 1, 1, '2025.6.24', '2025.6.30', '', '未归还');

-- ----------------------------
-- Table structure for feedback
-- ----------------------------
DROP TABLE IF EXISTS "feedback";
CREATE TABLE "feedback" (
  "feedback_id" INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
  "user_id" INTEGER,
  "content" TEXT,
  "submit_date" text,
  "reply" TEXT,
  "status" TEXT,
  FOREIGN KEY ("user_id") REFERENCES "user" ("user_id") ON DELETE NO ACTION ON UPDATE NO ACTION
);

-- ----------------------------
-- Records of feedback
-- ----------------------------

-- ----------------------------
-- Table structure for fine
-- ----------------------------
DROP TABLE IF EXISTS "fine";
CREATE TABLE "fine" (
  "fine_id" INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
  "record_id" INTEGER,
  "user_id" INTEGER,
  "amount" TEXT,
  "issue_date" text,
  "pay_date" text,
  "status" TEXT,
  FOREIGN KEY ("record_id") REFERENCES "borrow_record" ("record-id") ON DELETE NO ACTION ON UPDATE NO ACTION,
  FOREIGN KEY ("user_id") REFERENCES "user" ("user_id") ON DELETE NO ACTION ON UPDATE NO ACTION
);

-- ----------------------------
-- Records of fine
-- ----------------------------

-- ----------------------------
-- Table structure for sqlite_sequence
-- ----------------------------
DROP TABLE IF EXISTS "sqlite_sequence";
CREATE TABLE "sqlite_sequence" (
  "name",
  "seq"
);

-- ----------------------------
-- Records of sqlite_sequence
-- ----------------------------
INSERT INTO "sqlite_sequence" VALUES ('user', 4);
INSERT INTO "sqlite_sequence" VALUES ('book', 1);
INSERT INTO "sqlite_sequence" VALUES ('borrow_record', 1);
INSERT INTO "sqlite_sequence" VALUES ('feedback', 0);
INSERT INTO "sqlite_sequence" VALUES ('fine', 0);

-- ----------------------------
-- Table structure for user
-- ----------------------------
DROP TABLE IF EXISTS "user";
CREATE TABLE "user" (
  "user_id" INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
  "user_name" TEXT,
  "password_hash" TEXT,
  "role" TEXT
);

-- ----------------------------
-- Records of user
-- ----------------------------
INSERT INTO "user" VALUES (1, '我', '123456', '用户');
INSERT INTO "user" VALUES (2, '我', '123456', '用户');
INSERT INTO "user" VALUES (3, '我', '123456', '用户');
INSERT INTO "user" VALUES (4, '我', '123456', '用户');

-- ----------------------------
-- Auto increment value for book
-- ----------------------------
UPDATE "sqlite_sequence" SET seq = 1 WHERE name = 'book';

-- ----------------------------
-- Auto increment value for borrow_record
-- ----------------------------
UPDATE "sqlite_sequence" SET seq = 1 WHERE name = 'borrow_record';

-- ----------------------------
-- Auto increment value for feedback
-- ----------------------------

-- ----------------------------
-- Auto increment value for fine
-- ----------------------------

-- ----------------------------
-- Auto increment value for user
-- ----------------------------
UPDATE "sqlite_sequence" SET seq = 4 WHERE name = 'user';

PRAGMA foreign_keys = true;
