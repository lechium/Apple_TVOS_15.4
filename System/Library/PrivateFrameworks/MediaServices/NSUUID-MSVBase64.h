//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (MSVBase64)
+ (id)msv_uuidWithCFUUID:(struct __CFUUID *)arg1;	// IMP=0x000000000001ca65
+ (id)msv_UUIDWithData:(id)arg1;	// IMP=0x000000000001c9dd
+ (id)uuidWithMSVBase64UUID:(id)arg1;	// IMP=0x000000000001c98c
- (const struct __CFUUID *)msv_copyCFUUID;	// IMP=0x000000000001c952
- (id)msv_UUIDData;	// IMP=0x000000000001c8db
- (id)MSVBase64UUIDString;	// IMP=0x000000000001c85a
- (id)initWithMSVBase64UUIDString:(id)arg1;	// IMP=0x000000000001c76f
@end
