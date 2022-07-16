//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutContainer_Private-Protocol.h>

@class NSString;
@protocol _UIContentInsetsEnvironment;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutContainer : NSObject <_UICollectionLayoutContainer_Private>
{
    id <_UIContentInsetsEnvironment> _insetsEnvironment;	// 8 = 0x8
    struct CGSize _contentSize;	// 16 = 0x10
    struct NSDirectionalEdgeInsets _contentInsets;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000262a4f
@property(retain, nonatomic) id <_UIContentInsetsEnvironment> insetsEnvironment; // @synthesize insetsEnvironment=_insetsEnvironment;
@property(nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002628fa
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets effectiveContentInsets;
@property(readonly, nonatomic) struct CGSize effectiveContentSize;
@property(readonly, copy) NSString *description;
- (id)initWithContentSize:(struct CGSize)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 insetsEnvironment:(id)arg3;	// IMP=0x00000000002625c3
- (id)initWithContentSize:(struct CGSize)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x000000000026252c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

