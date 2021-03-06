//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

__attribute__((visibility("hidden")))
@interface TVHKMediaCategoryTypesOperation
{
    NSSet *_mediaCategoryTypes;	// 8 = 0x8
    unsigned long long _photoLibraryState;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005d0f5
@property(nonatomic) unsigned long long photoLibraryState; // @synthesize photoLibraryState=_photoLibraryState;
@property(copy, nonatomic) NSSet *mediaCategoryTypes; // @synthesize mediaCategoryTypes=_mediaCategoryTypes;
- (id)_mediaCategoryTypesFromparsedResponse:(id)arg1;	// IMP=0x000000000005cad8
- (void)_handleResponse:(id)arg1;	// IMP=0x000000000005c99a
- (id)initWithSessionState:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000005c7df
- (id)initWithRequest:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000005c770

@end

