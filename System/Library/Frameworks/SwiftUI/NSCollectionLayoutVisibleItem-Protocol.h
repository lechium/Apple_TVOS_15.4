//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/NSObject-Protocol.h>
#import <SwiftUI/UIDynamicItem-Protocol.h>

@class NSIndexPath, NSString;

@protocol NSCollectionLayoutVisibleItem <NSObject, UIDynamicItem>
@property(nonatomic, readonly) NSString *representedElementKind;
@property(nonatomic, readonly) unsigned long long representedElementCategory;
@property(nonatomic, readonly) struct CGRect bounds;
@property(nonatomic, readonly) struct CGRect frame;
@property(nonatomic, readonly) NSIndexPath *indexPath;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic) struct CATransform3D transform3D;
@property(nonatomic) struct CGAffineTransform transform;
@property(nonatomic) struct CGPoint center;
@property(nonatomic) _Bool hidden;
- (_Bool)isHidden;
@property(nonatomic) long long zIndex;
@property(nonatomic) double alpha;
@end

