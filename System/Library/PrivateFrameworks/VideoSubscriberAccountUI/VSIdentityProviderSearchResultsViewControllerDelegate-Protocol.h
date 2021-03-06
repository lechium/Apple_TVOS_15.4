//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class VSIdentityProvider, VSIdentityProviderSearchResultsViewController_tvOS, VSStorefront;

@protocol VSIdentityProviderSearchResultsViewControllerDelegate <NSObject>

@optional
- (void)identityProviderSearchResultsViewController:(VSIdentityProviderSearchResultsViewController_tvOS *)arg1 didPickStorefront:(VSStorefront *)arg2;
- (void)identityProviderSearchResultsViewControllerDidPickAdditionalIdentityProviders:(VSIdentityProviderSearchResultsViewController_tvOS *)arg1;
- (void)identityProviderSearchResultsViewController:(VSIdentityProviderSearchResultsViewController_tvOS *)arg1 didPickIdentityProvider:(VSIdentityProvider *)arg2;
@end

