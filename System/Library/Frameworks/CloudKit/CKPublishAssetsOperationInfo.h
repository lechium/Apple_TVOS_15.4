//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface CKPublishAssetsOperationInfo <NSSecureCoding>
{
    NSArray *_recordIDs;	// 8 = 0x8
    NSDictionary *_fileNamesByAssetFieldNames;	// 16 = 0x10
    unsigned long long _requestedTTL;	// 24 = 0x18
    unsigned long long _URLOptions;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012c5ad
- (void).cxx_destruct;	// IMP=0x000000000012c930
@property(nonatomic) unsigned long long URLOptions; // @synthesize URLOptions=_URLOptions;
@property(nonatomic) unsigned long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames; // @synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012c6dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012c5b5

@end

