//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>

@class NSData;

@protocol SPLocalPairingManagerXPCProtocol <NSObject>
- (oneway void)getOfflineFindingInfoWithCurrentData:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (oneway void)currentBeaconingKeyWithCompletion:(void (^)(SPBeaconingKey *))arg1;
- (oneway void)alwaysBeaconWildStateWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)setAlwaysBeaconWildState:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
- (oneway void)getLocalPairingDataWithCompletion:(void (^)(NSUUID *))arg1;
@end

