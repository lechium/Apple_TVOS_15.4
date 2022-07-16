//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, RBSProcessIdentity;
@protocol RBSProcessIdentifier, XCTDRBSProcessBundle, XCTDRBSProcessHandle;

@protocol XCTDRBSProcessHandle <NSObject>
+ (id <XCTDRBSProcessHandle>)handleForIdentifier:(id <RBSProcessIdentifier>)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *xpcServiceIdentifier;
@property(readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic) id <XCTDRBSProcessBundle> bundle;
@end

