//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVKit/TVSDocumentPostprocessor-Protocol.h>

@class NSString;

@interface TVJSONPostprocessor : NSObject <TVSDocumentPostprocessor>
{
}

- (id)processDocument:(id)arg1 forResponse:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001990a
- (id)postprocessorName;	// IMP=0x00000000000198fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

