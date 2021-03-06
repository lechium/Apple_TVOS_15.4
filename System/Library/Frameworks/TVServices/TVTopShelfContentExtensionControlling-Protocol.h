//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVServices/BSDescriptionProviding-Protocol.h>
#import <TVServices/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;
@protocol TVTopShelfContentExtensionControllingDelegate;

@protocol TVTopShelfContentExtensionControlling <NSObject, BSDescriptionProviding>
@property(nonatomic) __weak id <TVTopShelfContentExtensionControllingDelegate> delegate;
@property(readonly, copy, nonatomic) NSString *containingBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier;
- (void)invalidate;
- (void)didShowItemWithIdentifier:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)didSelectActionWithURL:(NSURL *)arg1 actionUserInfo:(NSDictionary *)arg2 forItemWithIdentifier:(NSString *)arg3 itemUserInfo:(NSDictionary *)arg4;
- (void)performCustomActionWithURL:(NSURL *)arg1 actionUserInfo:(NSDictionary *)arg2 forItemWithIdentifier:(NSString *)arg3 itemUserInfo:(NSDictionary *)arg4 completionHandler:(void (^)(TVTopShelfActionResult *))arg5;
- (void)loadTopShelfContentAndAttributes:(_Bool)arg1 completionHandler:(void (^)(id <TVTopShelfContent>, TVTopShelfContentExtensionAttributes *))arg2;
@end

