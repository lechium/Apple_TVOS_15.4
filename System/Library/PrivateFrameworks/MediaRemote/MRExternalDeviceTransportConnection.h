//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol MRExternalDeviceTransportConnectionDelegate;

@interface MRExternalDeviceTransportConnection : NSObject
{
    unsigned int _options;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSString *_destinationOutputDeviceUID;	// 24 = 0x18
    NSString *_destinationGroupUID;	// 32 = 0x20
    id <MRExternalDeviceTransportConnectionDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000010c989
@property(nonatomic) __weak id <MRExternalDeviceTransportConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *destinationGroupUID; // @synthesize destinationGroupUID=_destinationGroupUID;
@property(retain, nonatomic) NSString *destinationOutputDeviceUID; // @synthesize destinationOutputDeviceUID=_destinationOutputDeviceUID;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (id)exportOutputDevices:(id)arg1 endpoint:(id)arg2;	// IMP=0x000000000010c838
- (id)exportOutputDevice:(id)arg1 endpoint:(id)arg2;	// IMP=0x000000000010c6f9
- (id)exportEndpoints:(id)arg1;	// IMP=0x000000000010c67f
- (id)exportEndpoint:(id)arg1;	// IMP=0x000000000010c669
- (void)_notifyDelegateHasSpaceAvailable;	// IMP=0x000000000010c663
- (void)_notifyDelegateDidReceiveData:(id)arg1;	// IMP=0x000000000010c5b9
- (void)_notifyDelegateDidCloseWithError:(id)arg1;	// IMP=0x000000000010c50f
- (void)closeWithError:(id)arg1;	// IMP=0x000000000010c4fd
- (void)close;	// IMP=0x000000000010c474
- (unsigned long long)sendTransportData:(id)arg1 options:(id)arg2;	// IMP=0x000000000010c3d5
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) _Bool isValid;

@end

