//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IDSDestinationGroupSessionMember
{
    _Bool _isLightWeight;	// 8 = 0x8
    NSString *_uri;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012e2e1
- (void).cxx_destruct;	// IMP=0x000000000012e4a5
@property(readonly, nonatomic) _Bool isLightWeight; // @synthesize isLightWeight=_isLightWeight;
@property(readonly, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (id)destinationLightweightStatus;	// IMP=0x000000000012e3e3
- (id)destinationURIs;	// IMP=0x000000000012e380
- (_Bool)isDevice;	// IMP=0x000000000012e378
- (id)description;	// IMP=0x000000000012e2e9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012e244
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012e19a
- (id)initWithURI:(id)arg1;	// IMP=0x000000000012e186
- (id)initWithURI:(id)arg1 isLightWeight:(_Bool)arg2;	// IMP=0x000000000012e106

@end

