//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSPredicateVisitor-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryPredicateRemapper : NSObject <NSPredicateVisitor>
{
    NSString *_storeID;	// 8 = 0x8
    _Bool _previousKeyPathExpressionWasToken;	// 16 = 0x10
}

+ (id)defaultInstance;	// IMP=0x00000000000522c7
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x0000000000052c3d
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x0000000000052400
- (void)visitPredicate:(id)arg1;	// IMP=0x00000000000523fa
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000005236f
- (id)createPredicateForFetchFromPredicate:(id)arg1;	// IMP=0x000000000005235b
- (void)dealloc;	// IMP=0x0000000000052320
- (id)initWithStoreIdentifier:(id)arg1;	// IMP=0x00000000000522ec

@end
