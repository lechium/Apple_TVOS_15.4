//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNDocumentObservationsAccepting-Protocol.h>
#import <Vision/VNRequestProgressProviding-Protocol.h>

@class NSArray, NSString, VNDetectBarcodesRequest;

@interface VNRecognizeDocumentsRequest <VNRequestProgressProviding, VNDocumentObservationsAccepting>
{
    _Bool indeterminate;	// 8 = 0x8
    CDUnknownBlockType progressHandler;	// 16 = 0x10
    NSArray *inputTextBlocks;	// 24 = 0x18
    VNDetectBarcodesRequest *_barcodeRequest;	// 32 = 0x20
}

+ (id)supportedRecognitionLanguagesForTextRecognitionLevel:(long long)arg1 revision:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001bb4a4
+ (Class)configurationClass;	// IMP=0x00000000001bb493
- (void).cxx_destruct;	// IMP=0x00000000001bb303
@property(retain, nonatomic) VNDetectBarcodesRequest *barcodeRequest; // @synthesize barcodeRequest=_barcodeRequest;
@property(copy, nonatomic) NSArray *inputTextBlocks; // @synthesize inputTextBlocks;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler;
@property(readonly) _Bool indeterminate; // @synthesize indeterminate;
- (id)supportedRecognitionLanguagesAndReturnError:(id *)arg1;	// IMP=0x00000000001bb1e3
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001baf0d
- (id)sequencedRequestPreviousObservationsKey;	// IMP=0x00000000001bad8f
@property(nonatomic) unsigned long long maximumCandidateCount;
@property(nonatomic) _Bool detectionOnly;
@property(nonatomic) float minimumTextHeight;
@property(nonatomic) _Bool usesAlternateLineGrouping;
@property(nonatomic) _Bool usesLanguageDetection;
@property(nonatomic) _Bool usesLanguageCorrection;
@property(nonatomic) long long recognitionLevel;
@property(copy, nonatomic) NSArray *customWords;
@property(copy, nonatomic) NSArray *recognitionLanguages;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x00000000001ba5e1
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x00000000001ba191
- (_Bool)hasCancellationHook;	// IMP=0x00000000001ba189
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ba0ac
- (id)_applicableDetectorAndOptions:(id *)arg1 loadedInSession:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001b9fc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSArray *results; // @dynamic results;
@property(readonly) Class superclass;

@end

