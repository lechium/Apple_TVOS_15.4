//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICDelegateToken, ICURLBag, NSNumber, NSString;

@interface ICStoreURLRequestBuilderProperties : NSObject
{
    NSString *_iCloudPersonID;	// 8 = 0x8
    ICURLBag *_URLBag;	// 16 = 0x10
    NSNumber *_DSID;	// 24 = 0x18
    NSString *_storefrontIdentifier;	// 32 = 0x20
    NSNumber *_delegatedDSID;	// 40 = 0x28
    NSString *_delegatedStorefrontIdentifier;	// 48 = 0x30
    ICDelegateToken *_delegateToken;	// 56 = 0x38
    ICURLBag *_delegatedURLBag;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000c3019
@property(retain, nonatomic) ICURLBag *delegatedURLBag; // @synthesize delegatedURLBag=_delegatedURLBag;
@property(copy, nonatomic) ICDelegateToken *delegateToken; // @synthesize delegateToken=_delegateToken;
@property(copy, nonatomic) NSString *delegatedStorefrontIdentifier; // @synthesize delegatedStorefrontIdentifier=_delegatedStorefrontIdentifier;
@property(copy, nonatomic) NSNumber *delegatedDSID; // @synthesize delegatedDSID=_delegatedDSID;
@property(copy, nonatomic) NSString *storefrontIdentifier; // @synthesize storefrontIdentifier=_storefrontIdentifier;
@property(copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(retain, nonatomic) ICURLBag *URLBag; // @synthesize URLBag=_URLBag;
@property(copy, nonatomic) NSString *iCloudPersonID; // @synthesize iCloudPersonID=_iCloudPersonID;

@end

