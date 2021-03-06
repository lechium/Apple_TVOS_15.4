//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface REElementOpenAction
{
    NSURL *_url;	// 24 = 0x18
    NSString *_applicationID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e30a5
@property(readonly, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2fd1
- (unsigned long long)hash;	// IMP=0x00000000000e2f84
- (id)description;	// IMP=0x00000000000e2efa
- (void)_performWithContext:(id)arg1;	// IMP=0x00000000000e2de9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e2d88
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e2ce9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e2c1c
- (id)initWithURL:(id)arg1 applicationID:(id)arg2;	// IMP=0x00000000000e2b7a
- (id)init;	// IMP=0x00000000000e2b64

@end

