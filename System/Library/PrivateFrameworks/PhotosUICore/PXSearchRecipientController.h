//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXRecipientSearchDataSourceManager, UIView;
@protocol PXSearchRecipientControllerDelegate;

@interface PXSearchRecipientController : NSObject
{
    id <PXSearchRecipientControllerDelegate> _delegate;	// 8 = 0x8
    PXRecipientSearchDataSourceManager *_searchDataSourceManager;	// 16 = 0x10
    UIView *_searchResultsView;	// 24 = 0x18
    long long _searchState;	// 32 = 0x20
    unsigned long long _numberOfSearchRecipients;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007f43a
@property(readonly, nonatomic) unsigned long long numberOfSearchRecipients; // @synthesize numberOfSearchRecipients=_numberOfSearchRecipients;
@property(readonly, nonatomic) long long searchState; // @synthesize searchState=_searchState;
@property(readonly, nonatomic) UIView *searchResultsView; // @synthesize searchResultsView=_searchResultsView;
@property(readonly, nonatomic) PXRecipientSearchDataSourceManager *searchDataSourceManager; // @synthesize searchDataSourceManager=_searchDataSourceManager;
@property(nonatomic) __weak id <PXSearchRecipientControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disambiguateRecipient:(id)arg1;	// IMP=0x000000000007f36f

@end

