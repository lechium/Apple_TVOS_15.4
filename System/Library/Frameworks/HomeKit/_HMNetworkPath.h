//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/_HMNetworkPath-Protocol.h>

@class NSString;
@protocol OS_nw_path;

__attribute__((visibility("hidden")))
@interface _HMNetworkPath : NSObject <_HMNetworkPath>
{
    NSObject<OS_nw_path> *_nwPath;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001df79e
@property(retain, nonatomic) NSObject<OS_nw_path> *nwPath; // @synthesize nwPath=_nwPath;
@property(readonly, nonatomic) int status;
- (id)initWithNwPath:(id)arg1;	// IMP=0x00000000001df6dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

