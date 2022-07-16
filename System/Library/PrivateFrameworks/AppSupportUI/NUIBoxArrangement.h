//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppSupportUI/_NUIBoxArrangementContainer-Protocol.h>

@class NSString;
@protocol NUIArrangementContainer, NUIBoxArrangementDataSource;

@interface NUIBoxArrangement : NSObject <_NUIBoxArrangementContainer>
{
    struct _NUIBoxArrangement _arrangement;	// 8 = 0x8
    id <NUIArrangementContainer> _container;	// 120 = 0x78
    id <NUIBoxArrangementDataSource> _dataSource;	// 128 = 0x80
    struct {
        unsigned int containerDirection:1;
    } _flags;	// 136 = 0x88
    double _scale;	// 144 = 0x90
    struct CGRect _bounds;	// 152 = 0x98
}

- (id).cxx_construct;	// IMP=0x000000000001bf8f
- (void).cxx_destruct;	// IMP=0x000000000001bf55
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;	// IMP=0x000000000001ba93
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;	// IMP=0x000000000001ba46
- (void)positionItemsInBounds:(struct CGRect)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b9e1
- (struct CGSize)layoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x000000000001b900
- (void)populateBoxArrangementCells:(void *)arg1;	// IMP=0x000000000001b807
- (void)reloadData;	// IMP=0x000000000001b7f2
@property(readonly, nonatomic) __weak id <NUIBoxArrangementDataSource> dataSource;
@property(readonly, nonatomic) __weak id <NUIArrangementContainer> container;
- (void)dealloc;	// IMP=0x000000000001b77c
- (id)initWithContainer:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000000001b5bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

