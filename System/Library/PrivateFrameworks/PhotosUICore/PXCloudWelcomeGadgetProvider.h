//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXForYouRankable-Protocol.h>

@class NSArray, NSDate;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCloudWelcomeGadgetProvider <PXForYouRankable>
{
    unsigned long long _sourceType;	// 8 = 0x8
    id <PXCMMCloudGadgetViewControllerDelegate> _gadgetDelegate;	// 16 = 0x10
    NSArray *_contentGadgets;	// 24 = 0x18
}

+ (id)new;	// IMP=0x00000000002eea6e
- (void).cxx_destruct;	// IMP=0x00000000002ee9cc
@property(copy, nonatomic) NSArray *contentGadgets; // @synthesize contentGadgets=_contentGadgets;
@property(nonatomic) __weak id <PXCMMCloudGadgetViewControllerDelegate> gadgetDelegate; // @synthesize gadgetDelegate=_gadgetDelegate;
@property(readonly, nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;	// IMP=0x00000000002ee8fa
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;	// IMP=0x00000000002ee888
- (void)resetPriorityDate;	// IMP=0x00000000002ee882
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (void)generateGadgets;	// IMP=0x00000000002ee6c4
- (unsigned long long)estimatedNumberOfGadgets;	// IMP=0x00000000002ee6b9
- (id)initWithSourceType:(unsigned long long)arg1;	// IMP=0x00000000002ee675
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000002ee5f2
- (id)init;	// IMP=0x00000000002ee578

@end

