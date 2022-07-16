//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class CKRecordID;

@interface TRISizedCKRecordID : NSObject <NSCopying>
{
    CKRecordID *_recordId;	// 8 = 0x8
    unsigned long long _downloadSize;	// 16 = 0x10
}

+ (id)recordIDWithRecordId:(id)arg1 downloadSize:(unsigned long long)arg2;	// IMP=0x000000000000d27a
- (void).cxx_destruct;	// IMP=0x000000000000d570
@property(readonly, nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, nonatomic) CKRecordID *recordId; // @synthesize recordId=_recordId;
- (id)init;	// IMP=0x000000000000d556
- (id)description;	// IMP=0x000000000000d4d6
- (unsigned long long)hash;	// IMP=0x000000000000d4a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d43c
- (_Bool)isEqualToRecordID:(id)arg1;	// IMP=0x000000000000d363
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d358
- (id)copyWithReplacementDownloadSize:(unsigned long long)arg1;	// IMP=0x000000000000d323
- (id)copyWithReplacementRecordId:(id)arg1;	// IMP=0x000000000000d2d2
- (id)initWithRecordId:(id)arg1 downloadSize:(unsigned long long)arg2;	// IMP=0x000000000000d18b

@end

