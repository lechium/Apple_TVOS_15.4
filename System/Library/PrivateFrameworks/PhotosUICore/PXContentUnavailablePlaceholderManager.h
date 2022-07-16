//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PHFetchResult, PXGadgetDataSourceManager;
@protocol PXContentUnavailablePlaceholderManagerDelegate;

@interface PXContentUnavailablePlaceholderManager : NSObject <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver>
{
    struct {
        _Bool didChange;
    } _delegateRespondsTo;	// 8 = 0x8
    _Bool _dataSourceEmpty;	// 9 = 0x9
    _Bool _libraryEmpty;	// 10 = 0xa
    id <PXContentUnavailablePlaceholderManagerDelegate> _delegate;	// 16 = 0x10
    NSString *_customTitle;	// 24 = 0x18
    NSString *_customMessage;	// 32 = 0x20
    PXGadgetDataSourceManager *_gadgetDataSourceManager;	// 40 = 0x28
    PHFetchResult *_singleAssetFetchResult;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000801aad
@property(nonatomic, getter=isLibraryEmpty) _Bool libraryEmpty; // @synthesize libraryEmpty=_libraryEmpty;
@property(nonatomic, getter=isDataSourceEmpty) _Bool dataSourceEmpty; // @synthesize dataSourceEmpty=_dataSourceEmpty;
@property(retain, nonatomic) PHFetchResult *singleAssetFetchResult; // @synthesize singleAssetFetchResult=_singleAssetFetchResult;
@property(retain, nonatomic) PXGadgetDataSourceManager *gadgetDataSourceManager; // @synthesize gadgetDataSourceManager=_gadgetDataSourceManager;
@property(readonly, nonatomic) NSString *customMessage; // @synthesize customMessage=_customMessage;
@property(readonly, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(nonatomic) __weak id <PXContentUnavailablePlaceholderManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x000000000080198b
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000008018d1
- (void)_invalidate;	// IMP=0x0000000000801874
- (void)_gadgetDataSourceDidChange;	// IMP=0x0000000000801764
- (void)performPlaceholderButtonAction;	// IMP=0x00000000008016c9
@property(readonly, nonatomic) NSString *placeholderButtonTitle;
@property(readonly, nonatomic) NSString *placeholderMessage;
@property(readonly, nonatomic) NSString *placeholderTitle;
@property(readonly, nonatomic) _Bool wantsPlaceholder;
- (id)initWithGadgetDataSourceManager:(id)arg1 customTitle:(id)arg2 customMessage:(id)arg3;	// IMP=0x00000000008012d0
- (id)init;	// IMP=0x0000000000801256

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

