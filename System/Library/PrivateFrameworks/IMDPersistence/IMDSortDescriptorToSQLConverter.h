//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IMDSortDescriptorToSQLConverter : NSObject
{
    NSDictionary *_keyPathsToColumns;	// 8 = 0x8
    NSString *_expression;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000036369
@property(readonly, copy, nonatomic) NSString *expression; // @synthesize expression=_expression;
@property(readonly, copy, nonatomic) NSDictionary *keyPathsToColumns; // @synthesize keyPathsToColumns=_keyPathsToColumns;
- (id)initWithSortDescriptor:(id)arg1 keyPathsToColumns:(id)arg2;	// IMP=0x0000000000036284
- (id)init;	// IMP=0x0000000000036276
- (id)_orderByClauseWithSortDescriptor:(id)arg1;	// IMP=0x00000000000361ac
- (id)_columnWithSortDescriptor:(id)arg1;	// IMP=0x00000000000360de

@end
