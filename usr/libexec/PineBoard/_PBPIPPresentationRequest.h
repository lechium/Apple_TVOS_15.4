//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PBPIPContainerViewControllerLayout;

@interface _PBPIPPresentationRequest : NSObject
{
    PBPIPContainerViewControllerLayout *_layout;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000209040
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
// Error: Property attributes should begin with the type ('T') attribute, property name: layout
// Property attributes: (null)

- (id)initWithLayout:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000208eb0

@end
