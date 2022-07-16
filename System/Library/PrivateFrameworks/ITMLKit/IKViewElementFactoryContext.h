//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKViewElement, IKViewElementStyleFactory;

@interface IKViewElementFactoryContext : NSObject
{
    IKViewElementStyleFactory *_styleFactory;	// 8 = 0x8
    IKViewElement *_headViewElement;	// 16 = 0x10
    IKViewElement *_navigationBarViewElement;	// 24 = 0x18
    IKViewElement *_toolBarViewElement;	// 32 = 0x20
    IKViewElement *_templateViewElement;	// 40 = 0x28
    unsigned long long _updateType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000b03c4
@property(nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;
@property(retain, nonatomic) IKViewElement *templateViewElement; // @synthesize templateViewElement=_templateViewElement;
@property(retain, nonatomic) IKViewElement *toolBarViewElement; // @synthesize toolBarViewElement=_toolBarViewElement;
@property(retain, nonatomic) IKViewElement *navigationBarViewElement; // @synthesize navigationBarViewElement=_navigationBarViewElement;
@property(retain, nonatomic) IKViewElement *headViewElement; // @synthesize headViewElement=_headViewElement;
@property(retain, nonatomic) IKViewElementStyleFactory *styleFactory; // @synthesize styleFactory=_styleFactory;

@end

