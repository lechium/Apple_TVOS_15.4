//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VSIdentityProvider, VSSetTopBoxProfile;

@interface VSSetTopBoxInfoQueryResult : NSObject
{
    VSIdentityProvider *_setTopBoxProvider;	// 8 = 0x8
    VSSetTopBoxProfile *_profile;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003a9cc
@property(copy, nonatomic) VSSetTopBoxProfile *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) VSIdentityProvider *setTopBoxProvider; // @synthesize setTopBoxProvider=_setTopBoxProvider;

@end

