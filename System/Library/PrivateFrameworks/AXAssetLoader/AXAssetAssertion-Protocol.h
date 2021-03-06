//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXAssetLoader/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol AXAssetAssertion <NSObject>
+ (id)assertionWithPropertyListRepresentation:(NSDictionary *)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *clientIdentifier;
@property(readonly, nonatomic) NSString *assetType;
- (NSDictionary *)propertyListRepresentation;
@end

