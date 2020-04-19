/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Ken W.T. Kan
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
 
#include "languages.h"

const unsigned char FontGB10[][13] =
{
  {0x00,0xFE,0x48,0xCF,0x08,0xFE,0x2A,0x4A,0x89,0x79,0xC6,0x66,0x09}, /* �� */
  {0x84,0x44,0xA4,0x94,0x8C,0xFF,0x94,0xA4,0x44,0x84,0x00,0x0C,0x00}, /* �� */
  {0x12,0x0A,0x12,0x32,0x5E,0x93,0x9E,0x52,0x32,0x0A,0x6A,0x41,0x09}, /* �� */
  {0x89,0x69,0x99,0xA9,0xC8,0x04,0xFF,0x04,0x04,0xFC,0x05,0x46,0x06}, /* �� */
  {0xEE,0xBA,0xFE,0xB9,0xED,0x92,0xFE,0x8A,0x52,0xFE,0xBB,0x3B,0x0E}, /* �� */
  {0x08,0x09,0xFA,0x40,0x3E,0x86,0x56,0x25,0x55,0x8D,0x46,0xAA,0x0A}, /* �� */
  {0x11,0x11,0xC9,0x49,0x45,0x7F,0x45,0x45,0xC9,0x09,0xB0,0xAA,0x03}, /* �� */
  {0xF1,0x11,0x11,0x1F,0x20,0x18,0x67,0x82,0x42,0x3E,0x6B,0x61,0x09}, /* �� */
  {0x10,0x10,0x08,0x04,0x02,0xF9,0x02,0x04,0x08,0x10,0x00,0x0C,0x00}, /* �� */
  {0x01,0x7D,0xD5,0x55,0x55,0xFF,0x55,0x55,0x55,0x7D,0x6A,0xA9,0x0A}, /* �� */
  {0x20,0x24,0x24,0xA5,0x66,0x3C,0x64,0xA6,0x25,0x24,0x1A,0x00,0x09}, /* �� */
  {0x1A,0x4A,0x4E,0x4A,0xCA,0xAB,0xAA,0xAE,0x8A,0x1A,0x55,0xAB,0x0E}, /* �� */
  {0x00,0xFE,0x0A,0xEA,0x2A,0x29,0x29,0x29,0xE9,0x08,0xC6,0x55,0x03}, /* �� */
  {0xFF,0x01,0xF9,0x49,0x49,0x49,0x49,0xF9,0x01,0xFF,0xAB,0xAA,0x0E}, /* �� */
  {0x8A,0x6A,0xFF,0x29,0x48,0x3C,0x00,0x7F,0x04,0xD8,0x31,0x6A,0x01}, /* �� */
  {0x01,0xFF,0x29,0xA9,0xFF,0x81,0x7E,0x82,0x42,0x3E,0x15,0x63,0x09}, /* ȡ */
  {0x22,0xFA,0x16,0xF2,0x0A,0xFC,0xAB,0xFA,0xAE,0xFA,0xDC,0x46,0x0E}, /* ȷ */
  {0x08,0xF9,0x02,0x80,0x00,0xE0,0x1F,0xE0,0x00,0x00,0x94,0x01,0x09}, /* �� */
  {0x00,0x00,0x00,0x00,0xFF,0x08,0x08,0x08,0x08,0x00,0xAA,0xAB,0x0A}, /* �� */
  {0x20,0x20,0xFF,0x35,0x35,0xF5,0xB5,0xBF,0xA0,0x20,0x46,0xAE,0x0A}, /* �� */
  {0x11,0xF6,0x00,0x00,0xFF,0x95,0x35,0x55,0xB5,0x9F,0x93,0xAB,0x0A}, /* �� */
  {0x02,0x02,0x02,0x02,0x02,0xFE,0x12,0x12,0x22,0x42,0x00,0x0C,0x00}, /* �� */
  {0x08,0xD1,0x3A,0x00,0xFE,0xA8,0xAF,0xA8,0xAC,0xFA,0x0D,0x83,0x0E}, /* �� */
  {0x52,0xD6,0x5A,0xF3,0xDE,0x52,0x00,0xFE,0x12,0xF1,0xC6,0x64,0x0C}, /* �� */
  {0x01,0x01,0x7D,0x05,0x85,0x77,0x85,0x05,0x7D,0x01,0x6A,0x40,0x09}, /* ҳ */
  {0x8A,0x6A,0xFE,0x29,0x49,0xA4,0xAA,0x53,0x6A,0xC6,0x31,0xE9,0x01}, /* �� */
  {0x10,0x11,0x11,0x11,0x11,0xFF,0x11,0x11,0x11,0x11,0x80,0x0E,0x00}  /* �� */
};

const char MsgGB10_0[] = {0x45,0x56,0x41,0x43,0x43,0x5F,0x54,0x65,0x73,0x74,0x65,0x72,0x20,0xA1,0xA1,0xA1,0xA2,0x76,0x31,0x2E,0x30,0x00}; /*EVACC_Tester �汾v1.0*/
const char MsgGB10_1[] = {0x2A,0x3D,0xA1,0xA7,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x23,0x3D,0xA1,0xB4,0x00}; /**=��           #=��*/
const char MsgGB10_2[] = {0x2A,0x3D,0xA1,0xB0,0xA1,0xB7,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x23,0x3D,0xA1,0xB1,0xA1,0xB2,0x00}; /**=ȡ��        #=ȷ��*/
const char MsgGB10_3[] = {0x2A,0x3D,0xA1,0xA6,0xA1,0xAE,0x20,0x30,0x2C,0x38,0x3D,0xA1,0xA5,0xA1,0xB9,0x20,0x23,0x3D,0xA1,0xB1,0xA1,0xB2,0x00}; /**=���� 0,8=��ҳ #=ȷ��*/
const char MsgGB10_4[] = {0x38,0x3D,0xA1,0xB3,0xA1,0xB9,0x20,0x20,0x20,0x20,0x20,0x20,0x30,0x3D,0xA1,0xB6,0xA1,0xB9,0x00}; /*8=��ҳ      0=��ҳ*/
const char MsgGB10_5[] = {0x2A,0x3D,0xA1,0xA6,0xA1,0xAE,0x20,0x38,0x3D,0xA1,0xB3,0xA1,0xB9,0x20,0x30,0x3D,0xA1,0xB6,0xA1,0xB9,0x00}; /**=���� 8=��ҳ 0=��ҳ*/
const char MsgGB10_6[] = {0x2A,0x3D,0xA1,0xB0,0xA1,0xB7,0x20,0x30,0x2C,0x38,0x3D,0xA1,0xA5,0xA1,0xB9,0x20,0x23,0x3D,0xA1,0xAA,0xA1,0xB8,0x00}; /**=ȡ�� 0,8=��ҳ #=����*/
const char MsgGB10_7[] = {0x2A,0x3D,0xA1,0xAD,0xA1,0xB5,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x23,0x3D,0xA1,0xB1,0xA1,0xB2,0x00}; /**=����        #=ȷ��*/
const char MsgGB10_8[] = {0x2A,0x3D,0xA1,0xB0,0xA1,0xB7,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x23,0x3D,0xA1,0xAA,0xA1,0xB8,0x00}; /**=ȡ��        #=����*/
const char MsgGB10_9[] = {0x2A,0x3D,0xA1,0xA6,0xA1,0xAE,0x00}; /**=����*/
const char MsgGB10_10[] = {0x2A,0x3D,0xA1,0xB0,0xA1,0xB7,0x20,0x37,0x2C,0x39,0x3D,0xA1,0xA8,0xA1,0xA3,0x20,0x23,0x3D,0xA1,0xB1,0xA1,0xB2,0x00}; /**=ȡ�� 7,9=�ı� #=ȷ��*/
const char MsgGB10_11[] = {0x37,0x2C,0x38,0x2C,0x39,0x2C,0x30,0x3D,0xA1,0xBA,0xA1,0xA4,0x20,0x20,0x20,0x23,0x3D,0xA1,0xB1,0xA1,0xB2,0x00}; /*7,8,9,0=�ƶ�   #=ȷ��*/
const char MsgGB10_12[] = {0x00}; /**/
const char MsgGB10_13[] = {0xA1,0xAC,0xA1,0xAF,0x00}; /*����*/
const char MsgGB10_14[] = {0xA1,0xAF,0x00}; /*��*/
const char MsgGB10_15[] = {0xA1,0xA9,0x00}; /*��*/
const char MsgGB10_16[] = {0xA1,0xAB,0xA1,0xBB,0x00}; /*����*/

const TDialog DialogGB10[] =
{
  {"", MsgGB10_0},
  {"", MsgGB10_1},
  {"", MsgGB10_2},
  {"", MsgGB10_3},
  {"", MsgGB10_4},
  {"", MsgGB10_5},
  {"", MsgGB10_6},
  {"", MsgGB10_7},
  {"", MsgGB10_8},
  {"", MsgGB10_9},
  {"", MsgGB10_10},
  {"", MsgGB10_11},
  {"", MsgGB10_12},
  {"", MsgGB10_13},
  {"", MsgGB10_14},
  {"", MsgGB10_15},
  {"", MsgGB10_16}
};