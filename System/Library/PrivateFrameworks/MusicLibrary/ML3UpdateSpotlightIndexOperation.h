//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ML3UpdateSpotlightIndexOperation
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    unsigned long long _bundle;	// 16 = 0x10
    unsigned long long _batchCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000183ff3
@property(nonatomic) unsigned long long batchCount; // @synthesize batchCount=_batchCount;
@property(nonatomic) unsigned long long bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (_Bool)_execute:(id *)arg1;	// IMP=0x0000000000183f76
- (unsigned long long)type;	// IMP=0x0000000000183f6b

@end

