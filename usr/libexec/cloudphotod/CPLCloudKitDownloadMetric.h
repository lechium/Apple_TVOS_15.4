//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CPLCloudKitDownloadMetric
{
    unsigned long long _requestedItemCount;	// 72 = 0x48
    unsigned long long _expectedSize;	// 80 = 0x50
    unsigned long long _downloadedItemCount;	// 88 = 0x58
    unsigned long long _downloadedSize;	// 96 = 0x60
    unsigned long long _transcodedItemCount;	// 104 = 0x68
}

@property(nonatomic) unsigned long long transcodedItemCount; // @synthesize transcodedItemCount=_transcodedItemCount;
@property(nonatomic) unsigned long long downloadedSize; // @synthesize downloadedSize=_downloadedSize;
@property(nonatomic) unsigned long long downloadedItemCount; // @synthesize downloadedItemCount=_downloadedItemCount;
@property(nonatomic) unsigned long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(nonatomic) unsigned long long requestedItemCount; // @synthesize requestedItemCount=_requestedItemCount;
- (id)description;	// IMP=0x00100000000e901e
- (void)prepareCKEventMetric:(id)arg1;	// IMP=0x00100000000e8e84
- (id)init;	// IMP=0x00100000000e8e4e

@end

