//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVHKMediaEntitiesSearchRequest, TVHKMediaEntitiesSearchResponse;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibrarySearchRequestOperation
{
    TVHKMediaEntitiesSearchResponse *_response;	// 8 = 0x8
    TVHKMediaEntitiesSearchRequest *_request;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003c969
@property(copy, nonatomic) TVHKMediaEntitiesSearchRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) TVHKMediaEntitiesSearchResponse *response; // @synthesize response=_response;
- (void)executionDidBegin;	// IMP=0x000000000003c755
- (id)initWithMediaLibrary:(id)arg1 request:(id)arg2;	// IMP=0x000000000003c6d1
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x000000000003c662

@end

