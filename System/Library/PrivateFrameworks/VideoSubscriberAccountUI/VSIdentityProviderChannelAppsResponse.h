//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderChannelAppsResponse : NSObject
{
    NSArray *_allApps;	// 8 = 0x8
    NSDictionary *_appsByChannelID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007b716
@property(copy, nonatomic) NSDictionary *appsByChannelID; // @synthesize appsByChannelID=_appsByChannelID;
@property(copy, nonatomic) NSArray *allApps; // @synthesize allApps=_allApps;
- (id)init;	// IMP=0x000000000007b679

@end

