//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFFavoriteLocationProvider-Protocol.h>

@class NSString;
@protocol WFFavoriteLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface WFDefaultFavoritesProvider : NSObject <WFFavoriteLocationProvider>
{
    id <WFFavoriteLocationProviderDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000242c
@property(nonatomic) __weak id <WFFavoriteLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeLocation:(id)arg1;	// IMP=0x00000000000023ff
- (void)addLocation:(id)arg1;	// IMP=0x00000000000023f9
- (void)setLocations:(id)arg1;	// IMP=0x00000000000023f3
- (id)locationFromCity:(id)arg1;	// IMP=0x0000000000002305
- (id)locations;	// IMP=0x0000000000001fe2
- (_Bool)canProvideDefaultFavorites;	// IMP=0x0000000000001fda
- (id)init;	// IMP=0x0000000000001fc4
- (id)initWithDelegate:(id)arg1 persistence:(id)arg2;	// IMP=0x0000000000001f49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

