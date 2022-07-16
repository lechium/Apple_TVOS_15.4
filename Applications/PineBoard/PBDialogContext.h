//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PBSystemOverlayUIProvider;

@interface PBDialogContext : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    id <PBSystemOverlayUIProvider> _provider;	// 16 = 0x10
}

+ (id)contextWithViewServiceName:(id)arg1 className:(id)arg2;	// IMP=0x00400000000dc2d0
+ (id)contextWithViewService:(id)arg1;	// IMP=0x00100000000dc230
+ (id)contextWithViewController:(id)arg1;	// IMP=0x00100000000dbfa0
- (void).cxx_destruct;	// IMP=0x00200000000dc410
@property(readonly, nonatomic) id <PBSystemOverlayUIProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_invalidate;	// IMP=0x00100000000dc3a0
- (id)initWithIdentifier:(id)arg1 provider:(id)arg2;	// IMP=0x00100000000dbdb0

@end

