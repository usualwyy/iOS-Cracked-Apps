//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"
#import "NSStreamDelegate.h"

@class NSInputStream, NSMutableArray, NSMutableData, NSNetService, NSNetServiceBrowser, NSOutputStream, NSString;

@interface RFClient : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, NSStreamDelegate>
{
    CDStruct_8359e0d5 _flags;
    _Bool _browsing;
    _Bool _inputReady;
    _Bool _outputReady;
    _Bool _readingData;
    unsigned int _targetDataSizeFor32Bit;
    unsigned int _totalDataReadFor32Bit;
    NSString *_type;
    id <RFClientDelegate> _delegate;
    NSString *_passcode;
    NSNetServiceBrowser *_browser;
    NSNetService *_connectedService;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSMutableArray *_services;
    NSMutableData *_data;
    NSString *_fileName;
    unsigned long long _targetDataSizeFor64Bit;
    unsigned long long _totalDataReadFor64Bit;
    NSString *_cpuType;
}

@property(nonatomic) NSString *cpuType; // @synthesize cpuType=_cpuType;
@property(nonatomic) unsigned int totalDataReadFor32Bit; // @synthesize totalDataReadFor32Bit=_totalDataReadFor32Bit;
@property(nonatomic) unsigned int targetDataSizeFor32Bit; // @synthesize targetDataSizeFor32Bit=_targetDataSizeFor32Bit;
@property(nonatomic) unsigned long long totalDataReadFor64Bit; // @synthesize totalDataReadFor64Bit=_totalDataReadFor64Bit;
@property(nonatomic) unsigned long long targetDataSizeFor64Bit; // @synthesize targetDataSizeFor64Bit=_targetDataSizeFor64Bit;
@property(nonatomic) _Bool readingData; // @synthesize readingData=_readingData;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) _Bool outputReady; // @synthesize outputReady=_outputReady;
@property(nonatomic) _Bool inputReady; // @synthesize inputReady=_inputReady;
@property(retain, nonatomic) NSNetService *connectedService; // @synthesize connectedService=_connectedService;
@property(retain, nonatomic) NSNetServiceBrowser *browser; // @synthesize browser=_browser;
@property(nonatomic, getter=isBrowsing) _Bool browsing; // @synthesize browsing=_browsing;
@property(copy, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
@property(nonatomic) __weak id <RFClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_appendBytesAndCheck:(char *)arg1 length:(long long)arg2;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)_setupStreamsForService:(id)arg1;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)stop;
- (void)stopStreaming;
- (void)stopBrowsing;
- (void)searchForServices;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

