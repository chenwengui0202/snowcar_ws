
"use strict";

let Gprmc = require('./Gprmc.js');
let Inspva = require('./Inspva.js');
let TrackstatChannel = require('./TrackstatChannel.js');
let Satellite = require('./Satellite.js');
let NovatelSignalMask = require('./NovatelSignalMask.js');
let Inscov = require('./Inscov.js');
let Inspvax = require('./Inspvax.js');
let Time = require('./Time.js');
let Trackstat = require('./Trackstat.js');
let NovatelPosition = require('./NovatelPosition.js');
let Gpgga = require('./Gpgga.js');
let NovatelExtendedSolutionStatus = require('./NovatelExtendedSolutionStatus.js');
let Gpgsa = require('./Gpgsa.js');
let NovatelMessageHeader = require('./NovatelMessageHeader.js');
let Insstdev = require('./Insstdev.js');
let Gpgsv = require('./Gpgsv.js');
let NovatelVelocity = require('./NovatelVelocity.js');
let NovatelCorrectedImuData = require('./NovatelCorrectedImuData.js');
let NovatelReceiverStatus = require('./NovatelReceiverStatus.js');
let NovatelUtmPosition = require('./NovatelUtmPosition.js');
let RangeInformation = require('./RangeInformation.js');
let Range = require('./Range.js');

module.exports = {
  Gprmc: Gprmc,
  Inspva: Inspva,
  TrackstatChannel: TrackstatChannel,
  Satellite: Satellite,
  NovatelSignalMask: NovatelSignalMask,
  Inscov: Inscov,
  Inspvax: Inspvax,
  Time: Time,
  Trackstat: Trackstat,
  NovatelPosition: NovatelPosition,
  Gpgga: Gpgga,
  NovatelExtendedSolutionStatus: NovatelExtendedSolutionStatus,
  Gpgsa: Gpgsa,
  NovatelMessageHeader: NovatelMessageHeader,
  Insstdev: Insstdev,
  Gpgsv: Gpgsv,
  NovatelVelocity: NovatelVelocity,
  NovatelCorrectedImuData: NovatelCorrectedImuData,
  NovatelReceiverStatus: NovatelReceiverStatus,
  NovatelUtmPosition: NovatelUtmPosition,
  RangeInformation: RangeInformation,
  Range: Range,
};
