//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface DownloadPolicyChangeset : NSObject
{
    int _changesetType;	// 8 = 0x8
    NSDictionary *_downloadProperties;	// 16 = 0x10
    long long _networkType;	// 24 = 0x18
    NSSet *_policyIDs;	// 32 = 0x20
}

@property(copy, nonatomic) NSSet *policyIdentifiers; // @synthesize policyIdentifiers=_policyIDs;
@property(nonatomic) long long networkType; // @synthesize networkType=_networkType;
@property(copy, nonatomic) NSDictionary *downloadPropertiesForStoppedDownloads; // @synthesize downloadPropertiesForStoppedDownloads=_downloadProperties;
@property(nonatomic) int changesetType; // @synthesize changesetType=_changesetType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000179742
- (void)dealloc;	// IMP=0x00100000001796f8
- (id)initWithPolicyIdentifiers:(id)arg1;	// IMP=0x00100000001796a1

@end

