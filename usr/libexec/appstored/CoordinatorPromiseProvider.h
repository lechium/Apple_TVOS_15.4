//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol IXCoordinatorWithAppAssetPromise;

@interface CoordinatorPromiseProvider : NSObject
{
    id <IXCoordinatorWithAppAssetPromise> _coordinator;	// 8 = 0x8
}

+ (id)_newPromiseUsingDefinition:(id)arg1;	// IMP=0x00400000000e56c6
- (void).cxx_destruct;	// IMP=0x00200000000e5976
- (id)_setPromiseUsingSpecification:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000000e57b5
- (id)truncatePromiseID:(id)arg1 usingSpecification:(id)arg2 withError:(id *)arg3;	// IMP=0x00100000000e56ae
- (id)resetPromiseID:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000000e569c
- (id)fetchPromiseID:(id)arg1 orCreateUsingSpecification:(id)arg2 withError:(id *)arg3;	// IMP=0x00100000000e559b
- (id)fetchPromiseID:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000000e5395
- (_Bool)failPromiseID:(id)arg1 forReason:(id)arg2 withError:(id *)arg3;	// IMP=0x00100000000e5146
- (id)initWithCoordinator:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e4ff1

@end

