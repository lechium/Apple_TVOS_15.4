//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/VNVideoProcessorRequestConfigurationPopulating-Protocol.h>

@class NSString;

@interface VNVideoProcessorCadence : NSObject <VNVideoProcessorRequestConfigurationPopulating, NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e8754
- (void)populateVCPVideoProcessorRequestConfiguration:(id)arg1;	// IMP=0x00000000000e874e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

