//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ApplicationHandle
{
    NSString *_bundleID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000010f3ad
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000010f2f5
- (unsigned long long)hash;	// IMP=0x001000000010f29f
- (id)description;	// IMP=0x001000000010f237
- (id)initWithTransactionIdentifier:(long long)arg1 downloadIdentifier:(long long)arg2 bundleIdentifier:(id)arg3;	// IMP=0x001000000010f1a9
- (id)initWithDownloadHandle:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000010f10f
- (id)initWithTransactionIdentifier:(long long)arg1 downloadIdentifier:(long long)arg2;	// IMP=0x001000000010f0fa

@end
