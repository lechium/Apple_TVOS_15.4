//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSPredicateVisitor-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITargetContentIdentifierPredicateValidator : NSObject <NSPredicateVisitor>
{
    NSString *_compileTimeIssues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000005ad2b8
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x00000000005ad21c
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x00000000005ad0c6
- (void)visitPredicate:(id)arg1;	// IMP=0x00000000005ad0c0
- (_Bool)validatePredicate:(id)arg1 compileTimeIssues:(id *)arg2 runTimeIssues:(id *)arg3;	// IMP=0x00000000005acf54

@end

