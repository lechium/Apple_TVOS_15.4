//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;
@protocol TVPhotoServerInterface;

@protocol _TVPhotoServiceInterfaceForwardingProtocol
- (void)photoAssetsWithOptions:(NSDictionary *)arg1 remotePhotoServer:(id <TVPhotoServerInterface>)arg2 responseBlock:(void (^)(NSArray *, NSError *))arg3;
@end

