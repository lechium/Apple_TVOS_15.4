//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIStoryboardSegueTemplate : NSObject <NSCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_segueClassName;	// 16 = 0x10
    UIViewController *_viewController;	// 24 = 0x18
    NSString *_destinationViewControllerIdentifier;	// 32 = 0x20
    SEL _prepareForChildViewControllerSelector;	// 40 = 0x28
    _Bool _performOnViewLoad;	// 48 = 0x30
    _Bool _animates;	// 49 = 0x31
}

- (void).cxx_destruct;	// IMP=0x0000000000ccdfba
@property(nonatomic) _Bool animates; // @synthesize animates=_animates;
@property(nonatomic) _Bool performOnViewLoad; // @synthesize performOnViewLoad=_performOnViewLoad;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)perform:(id)arg1;	// IMP=0x0000000000ccde96
- (id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2;	// IMP=0x0000000000ccdd06
- (id)_perform:(id)arg1;	// IMP=0x0000000000ccdc86
- (id)segueWithDestinationViewController:(id)arg1;	// IMP=0x0000000000ccdb0c
- (id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1;	// IMP=0x0000000000ccda65
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;	// IMP=0x0000000000ccda5d
- (CDUnknownBlockType)newDefaultPrepareHandlerForSegue:(id)arg1;	// IMP=0x0000000000ccda55
@property(readonly, nonatomic) SEL prepareForChildViewControllerSelector;
@property(retain, nonatomic) NSString *customPrepareForChildViewControllerSelectorName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ccd922
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ccd76a
- (id)init;	// IMP=0x0000000000ccd72a

@end
