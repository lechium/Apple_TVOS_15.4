//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioDeviceTestSequence, NSString;

@protocol AVAudioDeviceTestServiceProtocol
- (void)cancel;
- (void)startWithSequence:(AVAudioDeviceTestSequence *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)passExtensionToken:(NSString *)arg1;
@end

