//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ML3DatabaseBlob : NSObject
{
    struct sqlite3_blob *_sqliteHandle;	// 8 = 0x8
}

- (id)data;	// IMP=0x00000000001757de
- (int)writeData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3;	// IMP=0x0000000000175797
- (int)readData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3;	// IMP=0x0000000000175711
- (unsigned long long)length;	// IMP=0x00000000001756f7
- (void)dealloc;	// IMP=0x00000000001756b8
- (id)initWithSQLiteHandle:(struct sqlite3_blob *)arg1;	// IMP=0x000000000017567b
- (id)init;	// IMP=0x0000000000175639

@end
