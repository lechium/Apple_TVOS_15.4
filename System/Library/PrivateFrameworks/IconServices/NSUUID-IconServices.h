//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (IconServices)
+ (id)_IS_UUIDByXORingUUIDs:(id)arg1;	// IMP=0x000000000001040a
+ (id)_IS_UUIDWithBytes:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000000103df
+ (id)_IS_nullUUID;	// IMP=0x00000000000103c6
+ (id)_IS_UUIDWithOSType:(unsigned int)arg1;	// IMP=0x00000000000103ad
+ (id)_IS_UUIDWithInt64:(long long)arg1;	// IMP=0x0000000000010394
+ (id)_IS_UUIDWithString:(id)arg1;	// IMP=0x000000000001037b
+ (id)_IS_UUIDWithData:(id)arg1;	// IMP=0x0000000000010362
- (void)_IS_getUUIDBytes:(char *)arg1 hash64:(unsigned long long *)arg2;	// IMP=0x00000000000103f8
@end
