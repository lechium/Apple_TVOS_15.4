//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVOutputDeviceFrecentsReading-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceLegacyFrecentsReader : NSObject <AVOutputDeviceFrecentsReading>
{
}

+ (id)defaultFrecentsReader;	// IMP=0x00000000000c2d58
- (id)frecencyInfoForDeviceWithID:(id)arg1;	// IMP=0x00000000000c2d97
@property(readonly, nonatomic) NSArray *deviceIDs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

