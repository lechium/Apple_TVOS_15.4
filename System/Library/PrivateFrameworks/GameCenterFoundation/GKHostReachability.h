//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString;

@interface GKHostReachability
{
    NSString *_hostName;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

+ (id)_gkReachabilityWithHostName:(id)arg1;	// IMP=0x000000000002f4b6
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void)dealloc;	// IMP=0x000000000002f52e

@end

