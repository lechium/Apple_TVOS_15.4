//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryRentalCheckinOperation
{
    _Bool _success;	// 8 = 0x8
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)_handleResponse:(id)arg1;	// IMP=0x0000000000067b42
- (id)initWithRentalItem:(id)arg1 sessionState:(id)arg2 requestSession:(id)arg3;	// IMP=0x0000000000067973
- (id)initWithRequest:(id)arg1 requestSession:(id)arg2;	// IMP=0x0000000000067904

@end

