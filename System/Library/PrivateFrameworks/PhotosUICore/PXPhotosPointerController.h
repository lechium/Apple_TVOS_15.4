//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView;
@protocol PXPhotosPointerControllerDelegate;

@interface PXPhotosPointerController : NSObject
{
    UIView *_contentView;	// 8 = 0x8
    id <PXPhotosPointerControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000189f66
@property(readonly, nonatomic) __weak id <PXPhotosPointerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0000000000189e70
- (void)invalidate;	// IMP=0x0000000000189e6a
- (id)initWithContentView:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000189e5c

@end

