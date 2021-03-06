//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INStringLocalizer;
@protocol WFActionProviderDelegate;

@interface WFActionProvider : NSObject
{
    id <WFActionProviderDelegate> _delegate;	// 8 = 0x8
    INStringLocalizer *_stringLocalizer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001d94e0
@property(retain, nonatomic) INStringLocalizer *stringLocalizer; // @synthesize stringLocalizer=_stringLocalizer;
@property(nonatomic) __weak id <WFActionProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteCache;	// IMP=0x00000000001d9455
- (void)updateCache:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d943f
- (id)createAllAvailableActions;	// IMP=0x00000000001d937d
- (void)createActionsForRequests:(id)arg1;	// IMP=0x00000000001d9377
- (id)availableActionIdentifiers;	// IMP=0x00000000001d936f

@end

