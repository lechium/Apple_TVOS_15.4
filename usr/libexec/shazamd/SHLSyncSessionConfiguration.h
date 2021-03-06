//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SHLSyncSessionConfiguration : NSObject
{
    long long _sessionType;	// 8 = 0x8
    long long _sessionScope;	// 16 = 0x10
    NSString *_callingProcessIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000018cf6
@property(readonly, copy, nonatomic) NSString *callingProcessIdentifier; // @synthesize callingProcessIdentifier=_callingProcessIdentifier;
@property(readonly, nonatomic) long long sessionScope; // @synthesize sessionScope=_sessionScope;
@property(readonly, nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
- (id)initWithType:(long long)arg1 scope:(long long)arg2 callingProcessIdentifier:(id)arg3;	// IMP=0x0010000000018c57

@end

