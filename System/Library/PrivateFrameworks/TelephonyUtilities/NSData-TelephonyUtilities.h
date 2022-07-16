//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString, NSUUID;

@interface NSData (TelephonyUtilities)
+ (id)tu_dataForUUID:(id)arg1;	// IMP=0x00000000000bce39
+ (id)tu_dataForURLSafeBase64EncodedString:(id)arg1;	// IMP=0x00000000000bccb3
+ (id)tu_dataForAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000000bcc81
@property(readonly, nonatomic) NSUUID *tu_UUID;
@property(readonly, copy, nonatomic) NSString *tu_URLSafeBase64EncodedString;
@end

