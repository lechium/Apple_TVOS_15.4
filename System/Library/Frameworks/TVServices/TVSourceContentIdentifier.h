//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, Protocol;

@interface TVSourceContentIdentifier
{
    Protocol *_sourcePublicProtocol;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000048b77
@property(readonly, nonatomic) Protocol *sourcePublicProtocol; // @synthesize sourcePublicProtocol=_sourcePublicProtocol;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000048a25
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004891f
- (id)initWithIdentifier:(id)arg1 container:(id)arg2;	// IMP=0x00000000000488c2
- (id)initWithBundleIdentifier:(id)arg1 publicProtocol:(id)arg2;	// IMP=0x000000000004885a
@property(readonly, copy, nonatomic) NSString *sourceBundleIdentifier;

@end
